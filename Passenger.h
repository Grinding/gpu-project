Struct Passenger{
        int id; //person id
        int x; //x coordinaate
        int y; //y coordinate
        //int AccessMatrix[][] = new int[100][100];
        int status; //evacuated or not
        //int N;
        float Mtime; //movement time
        float Wtime; //wait time
        float Rtime; //reaction time
        double fear; //fear value
        double agility; // agility value
        double diameter; // diameter occupied by passenger
        float totaltime; //total time to evacuate
        float totalDist; //total distance to exit
        double speed; // speed of passenger
        char Persontype; // Male or female
        int grpstatus; // in group or not
        double timeSteps; // minimum unit of time = 178 miliseconds
};
