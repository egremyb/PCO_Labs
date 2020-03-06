# HEIG-VD PCO - Labo2 Mutual exclusion
## Algorithm choice
We choosed to use Lamport's algorithm for his simplicity of implementation.

```java
// declaration and initial values of global variables
Entering: array [1..NUM_THREADS] of bool = {false};
Number: array [1..NUM_THREADS] of integer = {0};

lock(integer i) {
    Entering[i] = true;
    Number[i] = 1 + max(Number[1], ..., Number[NUM_THREADS]);
    Entering[i] = false;
    for (integer j = 1; j <= NUM_THREADS; j++) {
        // Wait until thread j receives its number:
        while (Entering[j]) { /* nothing */ }
        // Wait until all threads with smaller numbers or with the same
        // number, but with higher priority, finish their work:
        while ((Number[j] != 0) && ((Number[j], j) < (Number[i], i))) { /* nothing */ }
    }
}

unlock(integer i) {
    Number[i] = 0;
}

Thread(integer i) {
    while (true) {
        lock(i);
        // The critical section goes here...
        unlock(i);
        // non-critical section...
    }
}
```

Source : [Wikipedia](https://en.wikipedia.org/wiki/Lamport%27s_bakery_algorithm#Pseudocode)
## Implementation
No problems occured during the implementation.
We only had to follow and translate a Java example available on [Wikipedia](https://en.wikipedia.org/wiki/Lamport%27s_bakery_algorithm#Java_code).
### Yield function
In Lamport's pseudocode, there are two loops making the threads wait by doing nothing.
We used the yield function to let another threads be choosen by the scheduler.
This solution lets the program terminate sooner.
## Best practice
```java
class CriticalSection
{
  public:
  virtual ~CriticalSection() = default;
  /**
  * @brief Méthode initialisant la section critique
  * @param nbThreads Le nombre de threads maximal géré par la section critique
  * Cette méthode doit être appelée avant l’utilisation de la section critique
  */
  virtual void initialize(int nbThreads) = 0;
  /**
  * @brief Protocole d’entrée dans la section critique
  * @param index Indice de la tâche appelante
  */
  virtual void lock(int index) = 0;
  /**
  * @brief Protocole de sortie de la section critique
  * @param index Indice de la tâche appelante
  */
  virtual void unlock(int index) = 0;
};
```
It would be better to use `unsigned int` type for the functions arguments. It will resolve in less possible errors like giving a negative number.
