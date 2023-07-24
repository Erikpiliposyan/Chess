#pragma once

#include "chess_board.cpp"
#include <vector>
#include <string>

class game {
protected:
	int converter(char c);
public:
	game() = default;
	virtual void start() = 0;
	virtual void finish() = 0;
};

class chessgame :public game {
public:
	chessgame() = default;
	void start() override = 0;
	void finish() override = 0;
};

class chessminigame : public chessgame {
	//std::vector<std::string> figures = { "WK11","BK13","BN33","BB88","BQ18"};
	const int rows = 8;
	const int cols = 8;
	int cond;
	board b{rows,cols};
	int x = 0, y = 0;
public:
	void start() override;
	void finish()  override;
};