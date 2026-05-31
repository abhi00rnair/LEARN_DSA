class Solution:
    def asteroidsDestroyed(self, mass: int, asteroids: List[int]) -> bool:
        asteroids.sort()
        rett=mass
        for ast_mass in asteroids:
            if ast_mass>rett:
                return False
            else:
                rett+=ast_mass
        return True
        