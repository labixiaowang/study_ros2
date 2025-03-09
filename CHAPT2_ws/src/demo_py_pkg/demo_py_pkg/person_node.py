import rclpy

class PersonNode:
    def __init__(self,name:str,age:int) ->None:
        self.name = name
        self.age = age 
    
    def eat(self,food:str):
        """
        方法：吃东西
        food: 食物名称
        """
        print(f"{self.name}正在吃{food}")



def main():
    node = PersonNode("wang",20)
    print(node.name,node.age)
    node.eat("苹果")
    