#include "stdafx.h"
#include "Character2.h"


void Character2::Init()
{
	for (int i = 1; i <= 5; i++)
	{
		v_animeFrame.push_back(new vector<int>);
		v_animestate.push_back(new vector<int>);
		char str[128] = "";
		sprintf(str, "./data/song%d/Character2.txt", i);
		ifstream inFile1(str);
		while (!inFile1.eof())
		{
			inFile1.getline(animeFrame[i - 1], 100);
			char sl[16] = "/";
			char ctr[16] = "";
			for (int j = 0; j < 20; j++)
			{
				if (animeFrame[i - 1][j] == sl[0])
				{
					for (int x = 0; x <= j; x++)
						ctr[x] = animeFrame[i - 1][x];
					v_animestate[i - 1]->push_back(atoi(&animeFrame[i - 1][j + 1]));
				}
			}
			auto iter = v_animeFrame[i - 1];
			iter->push_back(atoi(ctr));
		}
		inFile1.close();
	}

	AddComponent<TexVertexRenderer>();
	m_Texvertex = GetComponent<TexVertexRenderer>();
	animedelay = 150;
	m_Texvertex->AddImage("Character2", L"./PNG/c2-1/0.png");
	m_Texvertex->AddanimeImage("Character2", L"./PNG/c2-1/%d.png", 0, 7, animedelay);
	m_Texvertex->SetAnimeConfirm(false);
	transform.position = { -350, -500, 0 };
	for (int i = 0; i < 5; i++)
	{
		animeActive.push_back(false);
		animeCount.push_back(0);
	}
}

void Character2::Update()
{
	if (INPUTMANAGER->IsKeyDown('A'))
	{
		ofstream outFile("./data/song1/Character2.txt", ios::app);
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
		if((*v_animestate[musicstate])[animeCount[musicstate]] == 0)
			m_Texvertex->AddanimeImage("Character2", L"./PNG/c2-1/%d.png", 0, 7, animedelay);
		else
			m_Texvertex->AddanimeImage("Character2-2", L"./PNG/c2-2/%d.png", 0, 23, 100);
		if (animeCount[musicstate] == 1)
		{
			camera->SetPosition({ transform.position.x, transform.position.y, MAX_SIZE_DIVISION + 300 });
			camera->SetTarget(transform.position);
		}
		animeCount[musicstate]++;
		//camera->SetTransform({ { transform.position.x, transform.position.y, MAX_SIZE_DIVISION },{ 0, 0, 0 },{ 0, 0, 0 } });
		//camera->SetTarget(transform.position);
	}
}

void Character2::Render()
{
}

void Character2::Release()
{
}



Character2::~Character2()
{
}
