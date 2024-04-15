class someClass {
    private:
        int memVar;
    public:
        int memFunc(int a, int b) {
            memVar = a + b;
            return memVar;
        }
};