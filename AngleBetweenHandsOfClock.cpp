class Solution {
public:
    double angleClock(int hour, int minutes) {
        double angle1 = 0, angle2=0;
        double pos1=0, pos2 = 0;
        double minutesTemp = minutes;
        double leftover = (minutesTemp/60)*30;
        pos1 = ((hour*30) + leftover);
        if (pos1>=360) pos1=pos1- 360;
        pos2 = minutesTemp*6;
        
        angle1=pos1-pos2;
        angle2=pos2-pos1;
        
        double absAngle1 = fabs(angle1);
        double absAngle2 = fabs(angle2);
        
        if(absAngle1<180 || absAngle2<180){
            if (absAngle1<absAngle2 && absAngle1>0)
                return angle1; 
            if (absAngle2<absAngle1 && absAngle2>0)
                return angle2;
            if (absAngle1<0 && absAngle2>0)
                return angle2;
            if (absAngle1>0 && absAngle2<0)
                return absAngle1;
        }
        double difference =0;;
        if (absAngle1>180 && absAngle2>180){
            difference = 360-absAngle1;
            return difference;
        }
        return absAngle2;
        
    }
};