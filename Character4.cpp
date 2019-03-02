#include "stdafx.h"
#include "Character4.h"


void Character4::Init()
{
	for (int i = 1; i <= 5; i++)
	{
		v_animeFrame.push_back(new vector<int>);
		char str[128] = "";
		sprintf(str, "./data/song%d/Character4.txt", i);
		ifstream inFile1(str);
		while (!inFile1.eof())
		{
			inFile1.getline(animeFrame[i - 1], 100);
			auto iter = v_animeFrame[i - 1];
			iter->push_back(atoi(animeFrame[i - 1]));
		}
		inFile1.close();
	}

	AddComponent<TexVertexRenderer>();
	m_Texvertex = GetComponent<TexVertexRenderer>();
	animedelay = 150;
	m_Texvertex->AddImage("Character4", L"./PNG/c4/1.png");
	m_Texvertex->AddanimeImage("Character4", L"./PNG/c4/%d.png", 1, 3, animedelay);
	m_Texvertex->SetAnimeConfirm(false);
	transform.position = { 350, -500, 0 };
	for (int i = 0; i < 5; i++)
	{
		animeActive.push_back(false);
		animeCount.push_back(0);
	}
}

void Character4::Update()
{
	if (INPUTMANAGER->IsKeyDown('D'))
	{
		ofstream outFile("./data/song1/Character4.txt", ios::app);
		outFile << time->GetTime() << endl;
		outFile.close();
	}
	int musicstate = (int)INGAMEMANAGER->GetMusicState() - 1;
	if ((int)INGAMEMANAGER->GetMusicState() == 0)
		musicstate = 0;
	auto iter = v_animeFrame[musicstate];
	if (time->GetTime() == (*iter)[animeCount[musicstate]])
	{
		animeActive[musicstate] = !animeActive[musicstate];
		m_Texvertex->SetAnimeConfirm(animeActive[musicstate]);
		animeCount[musicstate]++;
		if (animeCount[musicstate] == 2)
		{
			camera->SetPosition({ transform.position.x, transform.position.y, MAX_SIZE_DIVISION + 300 });
			camera->SetTarget(transform.position);
		}
		//camera->SetTransform({ { transform.position.x, transform.position.y, MAX_SIZE_DIVISION },{ 0, 0, 0 },{ 0, 0, 0 } });
		//camera->SetTarget(transform.position);
	}
}

void Character4::Render()
{
}

void Character4::Release()
{
}


Character4::~Character4()
{
}
