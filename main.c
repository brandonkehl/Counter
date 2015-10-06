//
//  main.c
//  loops
//
//  Created by brandon kehl on 6/14/15.
//  Copyright (c) 2015 brandonkehl. All rights reserved.
//

#import <stdio.h>
#import <readline/readline.h>
#include <stdlib.h>
int main(int argc, const char * argv[] ){
    printf("Where shall I start counting?  \n",NULL);
    for(int i = atoi(readline(NULL));i>0;i -=3){
     printf("%d\n",i);
    if(i%5==0){
        printf("Found One!");
        
    }
  }
}
