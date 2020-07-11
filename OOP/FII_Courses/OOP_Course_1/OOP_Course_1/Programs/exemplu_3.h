#pragma once
struct Test
{
	char x;
	char y;
	int z;
};

void exemplu_3() {
	Test t;
	(&t)->x = 0x34;
	t.y = 0x56;
	t.z = 0xdeadbeef;
}