/*(tr,tc) -- 当前棋盘左上角坐标
    (dr,dc) -- 黑色方格所在位置
size：当前棋盘的大小:2^k
*/

int tile = 1; // L型骨牌的编号(递增)
void chessBoard(int tr, int tc, int dr, int dc, int size)
{
    if (size == 1)
        return;                        // 棋盘方格大小为1,说明递归到最里层
    int t = tile++;                    // 每次递增1
    int s = size / 2;                  // 棋盘中间的行、列号(相等的)
    if (dr < tr + s && dc < tc + s)    // 检查特殊方块是否在左上角子棋盘中
        chessBoard(tr, tc, dr, dc, s); // 在,递归寻找子棋盘
    else                               // 不在，将该子棋盘右下角的方块视为特殊方块
    {
        board[tr + s - 1][tc + s - 1] = t; // 左上角子棋盘的右下角方块
        chessBoard(tr, tc, tr + s - 1, tc + s - 1, s);
    }
    if (dr < tr + s && dc >= tc + s) // 检查特殊方块是否在右上角子棋盘中
        chessBoard(tr, tc + s, dr, dc, s);
    else // 不在，将该子棋盘左下角的方块视为特殊方块
    {
        board[tr + s - 1][tc + s] = t; // 右上角棋盘的左下角方块
        chessBoard(tr, tc + s, tr + s - 1, tc + s, s);
    }
    if (dr >= tr + s && dc < tc + s) // 检查特殊方块是否在左下角子棋盘中
        chessBoard(tr + s, tc, dr, dc, s);
    else // 不在，将该子棋盘右上角的方块视为特殊方块
    {
        board[tr + s][tc + s - 1] = t;
        chessBoard(tr + s, tc, tr + s, tc + s - 1, s);
    }
    if (dr >= tr + s && dc >= tc + s) // 检查特殊方块是否在右下角子棋盘中
        chessBoard(tr + s, tc + s, dr, dc, s);
    else // 不在，将该子棋盘左上角的方块视为特殊方块
    {
        board[tr + s][tc + s] = t; // 右下角棋盘的左上角
        chessBoard(tr + s, tc + s, tr + s, tc + s, s);
    }
}
