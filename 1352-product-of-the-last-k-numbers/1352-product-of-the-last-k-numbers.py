class ProductOfNumbers:

    def __init__(self):
        self.container = [1]
        # The initial 1 makes calculating products and handling division easier

    def add(self, num: int) -> None:
        if num == 0:
            self.container = [1]
        else:
            self.container.append(self.container[-1]*num)
            # Each new element stores the product of all previous elements since the last zero

    def getProduct(self, k: int) -> int:
        if k >= len(self.container):
            return 0
            
        # self.container[-k-1] gives the prefix product
        # just before the last k numbers.
        # Dividing these two removes the earlier numbers
        # and gives the product of the last k numbers.

        return self.container[-1] // self.container[-k-1]   


# Your ProductOfNumbers object will be instantiated and called as such:
# obj = ProductOfNumbers()
# obj.add(num)
# param_2 = obj.getProduct(k)