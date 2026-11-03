#include<stdio.h>
#include<math.h>
int main()
{
    printf("Type the data asked in the following");
    getchar();
    
    printf("Initial Velocity: ");
    float velocity;
    scanf("%f",&velocity);

    printf("Acceleration: ");
    float acceleration;
    scanf("%f",&acceleration);

    printf("Time: ");
    float time;
    scanf("%f",&time);

    printf("Mass: ");
    float mass;
    scanf("%f",&mass);

    printf("Force: ");
    float force;
    scanf("%f",&force);

    float final_velocity;
    final_velocity = velocity + (acceleration*time);

    float distance;
    distance = (velocity*time) + (0.5*acceleration*time*time);

    float average_velocity;
    average_velocity = (velocity+final_velocity)/2;

    float kinetic_energy;
    kinetic_energy = 0.5*mass*velocity*velocity;

    float work_done;
    work_done = force*distance;

    float momentum;
    momentum = mass*velocity;

    float time_stop;
    time_stop = velocity/acceleration;

    printf("This is the final velocity: %f\n", final_velocity);

    printf("This is the distance travelled : %f\n",distance);
    
    printf("This is the average velocity: %f\n",average_velocity);

    printf("This is the kinetic energy: %f\n",kinetic_energy);

    printf("This is the work done: %f\n",work_done);

    printf("This is the momentum: %f\n",momentum);

    printf("This is the time stop: %f\n",time_stop);

    return 0;
}