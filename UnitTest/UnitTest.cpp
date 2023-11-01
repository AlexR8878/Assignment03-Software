#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* DiscoverWinner(const char Player1[], const char Player2[]);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestFail)
		{
			const char Player1[] = "Paper";
			const char Player2[] = "Paper";
			Assert::AreEqual("Player1", (DiscoverWinner(Player1, Player2)));
		}
		TEST_METHOD(TestDrawRock)
		{
			const char Player1[] = "Rock";
			const char Player2[] = "Rock";
			Assert::AreEqual("Draw", (DiscoverWinner(Player1, Player2)));
		}
		TEST_METHOD(TestDrawScissors)
		{
			const char Player1[] = "Scissors";
			const char Player2[] = "Scissors";
			Assert::AreEqual("Draw", (DiscoverWinner(Player1, Player2)));
		}
		TEST_METHOD(TestDrawPaper)
		{
			const char Player1[] = "Paper";
			const char Player2[] = "Paper";
			Assert::AreEqual("Draw", (DiscoverWinner(Player1, Player2)));
		}
		TEST_METHOD(TestPlayer1WinRock)
		{
			const char Player1[] = "Rock";
			const char Player2[] = "Scissors";
			Assert::AreEqual("Player1", (DiscoverWinner(Player1, Player2)));
		}
		TEST_METHOD(TestPlayer1WinPaper)
		{
			const char Player1[] = "Paper";
			const char Player2[] = "Rock";
			Assert::AreEqual("Player1", (DiscoverWinner(Player1, Player2)));
		}
		TEST_METHOD(TestPlayer1WinScissors)
		{
			const char Player1[] = "Scissors";
			const char Player2[] = "Paper";
			Assert::AreEqual("Player1", (DiscoverWinner(Player1, Player2)));
		}
		TEST_METHOD(TestPlayer2WinScissors)
		{
			const char Player1[] = "Paper";
			const char Player2[] = "Scissors";
			Assert::AreEqual("Player2", (DiscoverWinner(Player1, Player2)));
		}
		TEST_METHOD(TestPlayer2WinRock)
		{
			const char Player1[] = "Scissors";
			const char Player2[] = "Rock";
			Assert::AreEqual("Player2", (DiscoverWinner(Player1, Player2)));
		}
		TEST_METHOD(TestPlayer2WinPaper)
		{
			const char Player1[] = "Rock";
			const char Player2[] = "Paper";
			Assert::AreEqual("Player2", (DiscoverWinner(Player1, Player2)));
		}
		TEST_METHOD(TestInvalid1)
		{
			const char Player1[] = "32";
			const char Player2[] = "Scissors";
			Assert::AreEqual("Invalid", (DiscoverWinner(Player1, Player2)));
		}
		TEST_METHOD(TestInvalid2)
		{
			const char Player1[] = "Scissors";
			const char Player2[] = "32";
			Assert::AreEqual("Invalid", (DiscoverWinner(Player1, Player2)));
		}
		TEST_METHOD(TestInvalid3)
		{
			const char Player1[] = "Rokc";
			const char Player2[] = "Scissors";
			Assert::AreEqual("Invalid", (DiscoverWinner(Player1, Player2)));
		}
		TEST_METHOD(TestInvalid4)
		{
			const char Player1[] = "32";
			const char Player2[] = "32";
			Assert::AreEqual("Invalid", (DiscoverWinner(Player1, Player2)));
		}

	};
}