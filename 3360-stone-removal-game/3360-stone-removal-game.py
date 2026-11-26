class Solution:
    def canAliceWin(self, n: int) -> bool:

        alice_stones_to_remove = 10
        while True:
            if n >= alice_stones_to_remove:
                n -= alice_stones_to_remove
                bob_stones_to_remove = alice_stones_to_remove - 1
            else:
                return False
            if n >= bob_stones_to_remove:
                n -= bob_stones_to_remove
                alice_stones_to_remove = bob_stones_to_remove - 1
            else:
                return True