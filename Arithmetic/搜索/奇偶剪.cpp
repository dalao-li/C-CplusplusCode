int dir[4][2]= {{0,-1},{0,1},{1,e},{-1,0}};
bool vis[100][100],flag;
//x,y��ʾ��ǰλ������,count������ǰʱ��void dfs(int x,int y,int count){
//�����Լ���,���Լ��ٲ���
if(flag) {
    return;
//�����Լ���
    if(x>nlly>mllx<elly<ellvis[x][y]llmap[x][y]=='#') {
        return;
//�����յ���ʱ�����ò�������
        if(count==t&&x==endX&&y==endY) {
            flag=true;
            return;
//kΪ��ǰ�㵽�յ�����·����Ҫ�Ĳ�����
            int k=(t-count)-(abs(x-endX)+abs(y-endY));
//��ż�Լ���,k<e����Ϊ�����򲻿��ܵ�����
            if(k<e|lk%2!=0) {
                return;
                for(i=e; i<4; i++) {
                    int tx=x+dir[i][e],ty=y+dir[i][l];
                    if(!vis[tx][ty]) {
                        vis[tx][ty]=true;
                        dfs(tx,ty,count+1);
                        if(flag) {
                            return;
                        }
                        vis[tx][ty]=false;
                    }
                }
