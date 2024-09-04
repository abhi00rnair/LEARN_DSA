class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        // Directions: 0=north, 1=east, 2=south, 3=west
        int direction = 0;
        int x = 0;
        int y = 0;
        int maxDist = 0;

        // Convert obstacles into a set for quick lookup
        unordered_set<string> obstacleSet;
        for (const auto& obstacle : obstacles) {
            obstacleSet.insert(to_string(obstacle[0]) + "," + to_string(obstacle[1]));
        }

        for (int command : commands) {
            if (command > 0) {
                // Move forward
                for (int k = 0; k < command; ++k) {
                    // Calculate the new position
                    int newX = x, newY = y;
                    if (direction == 0) ++newY;    // north
                    if (direction == 1) ++newX;    // east
                    if (direction == 2) --newY;    // south
                    if (direction == 3) --newX;    // west
                    
                    // Check if the new position is an obstacle
                    if (obstacleSet.count(to_string(newX) + "," + to_string(newY))) {
                        break;  // Stop moving if there is an obstacle
                    }
                    
                    // Update position
                    x = newX;
                    y = newY;
                    maxDist = max(maxDist, x*x + y*y);
                }
            } else {
                // Change direction
                if (command == -1) {
                    direction = (direction + 1) % 4;  // Turn right
                } else {
                    direction = (direction + 3) % 4;  // Turn left
                }
            }
        }

        return maxDist;
    }
};
