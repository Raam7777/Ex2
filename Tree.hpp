namespace ariel {
  class Tree {

  private:
    struct node {
      int data;
      struct node *left, *right;
    };

    node *root;
    void insert(int i, node* ptr);
    void print(const struct node *root);
    void remove(int i, struct node *ptr);
    void removeRootMatch();
    void removeMatch(node* parent, node* match, bool left);
    int findSmallest(node* ptr);

  public:

    Tree();
    node *createLeaf(int i);
    void insert(int i);
    int findSmallest();
    void removeData(int i);
    int size();
    bool contains(int i);
    int _root();
    int parents(int i);
    int left(int i);
    int right(int i);
    void print();

  };
}
