/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//��Ʈ��ŷ �˰����� �����ϱ⿡ ���� �����̴�.

//�ι�° ��� (1632ms)

int isused1[14]; // column�� �����ϰ� �ִ���
int isused2[27]; // / ���� �밢���� �����ϰ� �ִ���
int isused3[27]; // \ ���� �밢���� �����ϰ� �ִ���. ������ �־��� �ִ�ũ�� 14�϶� �밢���� 2n-1���� 27���� ����.

int cnt = 0;
int n;

void func(int cur) { // cur��° row�� ���� ��ġ�� ������
    if (cur == n) { // N���� ���µ� �����ߴٸ�
        cnt++;
        return;
    }
    for (int i = 0; i < n; i++) { // (cur, i)�� ���� ���� ����
        if (isused1[i] || isused2[i + cur] || isused3[cur - i + n - 1]) // column�̳� �밢�� �߿� ������ �ִٸ�
            continue;
        isused1[i] = 1;
        isused2[i + cur] = 1;
        isused3[cur - i + n - 1] = 1;  //ex. 5X5 ����� ��� row-col�ϸ� -4~4�� �����µ� �̰� �迭�� �����Ϸ��� n-1�� 4�� ���ؼ� 0~9�� ������� �� ����.
        func(cur + 1);

        //��Ʈ��ŷ �˰����� �ٽ��� ���� ���·� ���� �ǵ����� �۾�.
        //���� ��Ϳ��� ä������ �κ��� ���� ����� ���þ��⿡ �̰����� ���� �ʿ䰡 ����.
        //���� �ʱ�ȭ�ؾ� �ϴ� �����͸��� ��� �ʱ�ȭ�����ִ� �۾��� ���� �߿��ϴ�.
        isused1[i] = 0;
        isused2[i + cur] = 0;
        isused3[cur - i + n - 1] = 0;
    }
}

int main(void) {
    scanf("%d", &n);
    func(0);
    printf("%d", cnt);
    return 0;
}*/