import random
class Creature():
    def __init__(self, hp):
        self.hp = hp
    def attack(self):
        attack_value = random.randint(0,50)
        return attack_value

    def not_dead(self):
        if self.hp < 0:
            return False
        else:
            return True

player = Creature(100)
enemy = Creature(100)

while player.not_dead() and enemy.not_dead():
    user_input = input('Attack or Defence(a/d): ')
    if user_input == 'a':
        player_attack_value = player.attack()
        enemy_attack_value = enemy.attack()
