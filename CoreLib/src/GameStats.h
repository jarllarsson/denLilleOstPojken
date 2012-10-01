#ifndef GAMESTATS_H
#define GAMESTATS_H

#include <iostream>

class GameStats
{
private:
	int		m_numPills;
public:
	GameStats();
	~GameStats();
	void	update(float p_deltaTime);
	void	setNumPills(const int p_numPills);
	int		getNumPills();
	void	pillEaten();
};

#endif