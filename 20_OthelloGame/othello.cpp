#include <iostream>
using namespace std;
class othello {
private:
    const int non = 2;
    const int ROW = 8, COLUMN = 8;
    int map[8][8];
    int turn = 0, opturn = 1;
public:
    othello();
    ~othello();
    void point(const int, const int);
    void checkcross(const int, const int);
    void checkstraight(const int, const int);
    void changeturn();
    void count();

};

othello::othello() {
    for (int i = 0; i < ROW; ++i) {
        for (int j = 0; j < COLUMN; ++j) {
            map[i][j] = non;
        }
    }
    map[3][4] = 0, map[4][3] = 0;
    map[3][3] = 1, map[4][4] = 1;
}
othello::~othello() {

}
void othello::point(const int r, const int c) {
    map[r][c] = turn;
}
void othello::checkcross(const int r, const int c) {
    int cr, cc, count;

    count = 0, cr = r, cc = c; //4
    if (cr > 0 && cc > 0 && (map[cr - 1][cc - 1] == opturn)) {
        while (cr >= 1 && cc >= 1 && (map[--cr][--cc] == opturn)) ++count;
    }
    if (cr >= 0 && cc >= 0 && (map[cr][cc] == turn)) {
        for (int i = 0; i < count; ++i) map[++cr][++cc] = turn;
    }

    count = 0, cr = r, cc = c; //1
    if (cr > 0 && cc < COLUMN - 1 && (map[cr - 1][cc + 1] == opturn)) {
        while (cr >= 1 && cc <= COLUMN-2 && (map[--cr][++cc] == opturn)) ++count;
    }
    if (cr >= 0 && cc <= COLUMN - 1 && (map[cr][cc] == turn)) {
        for (int i = 0; i < count; ++i) map[++cr][--cc] = turn;
    }

    count = 0, cr = r, cc = c; //2
    if (cr < ROW - 1 && cc < COLUMN - 1 && (map[cr + 1][cc + 1] == opturn)) {
        while (cr <= ROW-2 && cc <= COLUMN-2 && (map[++cr][++cc] == opturn)) ++count;
    }
    if (cr <= ROW - 1 && cc <= COLUMN - 1 && (map[cr][cc] == turn)) {
        for (int i = 0; i < count; ++i) map[--cr][--cc] = turn;
    }

    count = 0, cr = r, cc = c; //3
    if (cr < ROW - 1 && cc > 0 && (map[cr + 1][cc - 1] == opturn)) {
        while (cr <= ROW-2 && cc >= 1 && (map[++cr][--cc] == opturn)) ++count;
    }
    if (cr <= ROW - 1 && cc >= 0 && (map[cr][cc] == turn)) {
        for (int i = 0; i < count; ++i) map[--cr][++cc] = turn;
    }
}
void othello::checkstraight(const int r, const int c) {
    int cr, cc, count;

    count = 0, cr = r, cc = c; //L
    if (cc > 0 && (map[cr][cc - 1] == opturn)) {
        while (cc >= 1 && (map[cr][--cc] == opturn)) ++count;
    }
    if (cc >= 0 && (map[cr][cc] == turn)) {
        for (int i = 0; i < count; ++i) map[cr][++cc] = turn;
    }

    count = 0, cr = r, cc = c; //U
    if (cr > 0 && (map[cr - 1][cc] == opturn)) {
        while (cr >= 1 && (map[--cr][cc] == opturn)) ++count;
    }
    if (cr >= 0 && (map[cr][cc] == turn)) {
        for (int i = 0; i < count; ++i) map[++cr][cc] = turn;   
    }

    count = 0, cr = r, cc = c; //R
    if (cc < COLUMN - 1 && (map[cr][cc + 1] == opturn)) {
        while (cc <= COLUMN -1 && (map[cr][++cc] == opturn)) ++count;
    }
    if (cc <= COLUMN - 1 && (map[cr][cc] == turn)) {
        for (int i = 0; i < count; ++i) map[cr][--cc] = turn;
    }

    count = 0, cr = r, cc = c; //D
    if (cr < ROW - 1 && (map[cr + 1][cc] == opturn)) {
        while (cr <= ROW-2 && (map[++cr][cc] == opturn)) ++count;
    }
    if (cr <= ROW - 1 && (map[cr][cc] == turn)) {
        for (int i = 0; i < count; ++i) map[--cr][cc] = turn;
    }

}
void othello::changeturn() {
    ++turn;
    turn %= 2;
    opturn = !turn;

}
void othello::count() {
    int black = 0, white = 0;
    for (int i = 0; i < ROW; ++i) {
        for (int j = 0; j < COLUMN; ++j) {
            if (map[i][j] == 0) ++black;
            else if (map[i][j] == 1) ++white;
        }
    }
    cout << black << " " << white << endl;

    for (int i = 0; i < ROW; ++i) {
        for (int j = 0; j < COLUMN; ++j) {
            if (map[i][j] == 0) cout << "X";
            else if (map[i][j] == 1) cout << "O";
            else cout << "+";
        }
        cout << endl;
    }
}

int main(void) {
    int t, n, y, x;
    cin >> t;
    while (t--) {
        cin >> n;
        othello g1;
        while (n--) {
            cin >> y >> x;
            g1.point(y - 1, x - 1);
            g1.checkcross(y - 1, x - 1);
            g1.checkstraight(y - 1, x - 1);
            g1.changeturn();
        }
        g1.count();
    }

}