#include <iostream>

// loop through the strings, both, when finding first occurance, add to counter, 
   // and stor both variable sin seperate vars. then, when reaching another different occurnace, check if the vars equate to the occurance
   // if not, then error, else, then confirm and finilize the ...

   // first start by checking if the lenghts are equal

// function will return true if the string requires just one change, will return false if it doesnt require any change or 2 or more changes...
bool myfunc(std::string test1, std::string test2) {
    char test1var;
    char test2var ;
    int count = 0;

    if (test1.size() != test2.size()) {
        //std::cout << "false" << std::endl;
        return false;
    }
    else {
        // loop:
        for (int i = 0; i < test1.size(); i++) {
            //
            if (test1[i] != test2[i]) {
                if (count== 2) {
                    //std::cout << "false" << std::endl;
                    return false;
                }

                // check if we reach second occurance:
                if (count == 1 && test1[i] == test2var && test2[i] == test1var) {
                    continue; // means that we good
                    count++;
                }
                else if (count == 1 && (test1[i] != test2var || test2[i] != test1var) ) {
                    //std::cout << "false" << std::endl;
                    return false;
                }

                count++;
                test1var = test1[i];
                test2var = test2[i];
            }
        }

        if (count == 0) {
            return false;
        }
    }
    return true;
}


int main()
{
    // should return true:
    std::string test1 = "daniel";
    std::string test2 = "lanied";

    std::string test3 = "cat";
    std::string test4 = "cat";

    std::string test5 = "potatoe";
    std::string test6 = "potateo";

    std::cout << myfunc(test1, test2) << std::endl; // must return true
    std::cout << myfunc(test3, test4) << std::endl; // must return false
    std::cout << myfunc(test5, test6) << std::endl; // must return true

    return 0;
}
