# ALGORITHM Наадмын сур харваа

# Main
DECLARE INTIGER n, i, sum, max, niit, shildegonoo1, shildegonoo2, shildegonoo3
DECLARE STRING ner, shildegner1, shildegner2, shildegner3
DO (n < 5 || n > 10):
    INPUT n
ASSIGN shildegonoo1 = -1
ASSIGN shildegonoo2 = -1
ASSIGN shildegonoo3 = -1
ASSIGN shildegner1 = "-"
ASSIGN shildegner2 = "-"
ASSIGN shildegner3 = "-"
FOR i = 1 to n
    INPUT ner
    ASSIGN niit = 0
    FOR sum = 1 to 4
        DO 
            INPUT max
        INPUT (max < 0 || max > 10):
        ASSIGN niit = niit + max
    END    
    CALL angilal(niit)
    IF niit > shildegonoo1 :
        ASSIGN shildegonoo3 = shildegonoo2
        ASSIGN shildegner3  = shildegner2
        ASSIGN shildegonoo2 = shildegonoo1
        ASSIGN shildegner2  = shildegner1
        ASSIGN shildegonoo1 = niit
        ASSIGN shildegner1  = ner
        ELSE IF niit > shildegonoo2 :
            ASSIGN shildegonoo3 = shildegonoo2
            ASSIGN shildegner3  = shildegner2
            ASSIGN shildegonoo2 = niit
            ASSIGN shildegner2  = ner
            ELSE IF niit > shildegonoo3 :
                ASSIGN shildegonoo3 = niit
                ASSIGN shildegner3  = ner
                END
            END
        END   
    END   
    OUTPUT shildegner1, shildegonoo1
    OUTPUT shildegner2, shildegonoo2
    OUTPUT shildegner3, shildegonoo3
END

# Angilal (Ded function) INPUT INTIGER niit
IF niit = 40 
   OUTPUT "mash sain"
    ELSE IF niit >= 30  
        OUTPUT "sain"
        ELSE IF niit >= 20
            OUTPUT "dund"
                ELSE  
                    OUTPUT "muu"
END