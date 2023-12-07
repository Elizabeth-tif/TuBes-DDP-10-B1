#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool WinCondition (int array[]){
// win hoizontal
if ((array[0] == array[1] && array[1] == array[2]) || (array[3] == array[4] && array[4] == array[5]) || (array[6] == array[7] && array[7] == array[8])) {
        return true;
    }
    // win vertical
    else if ((array[0] == array[3] && array[3] == array[6]) || (array[1] == array[4] && array[4] == array[7]) || (array[2] == array[5] && array[5] == array[8])) {
        return true;
    }
    // win diagonal
    else if ((array[0] == array[4] && array[4] == array[8]) || (array[2] == array[4] && array[4] == array[6])) {
        return true;
    }
	//if no winner
    return false; 

}

bool MoveLeft(int array[], turn){
	int i,size;
	size = sizeof(array);
	i = 0;
	while (i < size){
		if (array[i] == 0){
			return true; 
			}
		i++;	
		}
	return false;
}

void WinTie (int array[]){
	bool winTF = WinCondition(array);
	bool move = MoveLeft(array);
	int turn = 1;
//if whose turn nganu then print nganu
	if (move && winTF){
		if (turn == 1){
		printf("Player WIN");
		}
		else if (turn == 2) {
		printf("Computer WIN");		
		}
	}
	else if (!move && !winTF){
	printf("Seri");
	}
}

int main(){
	
return 0;
}
