namespace c3131416_assignment2{

		//Constructors
		template<typename Obj>
		GTree<Obj>::GTree()
		{
			root = NULL;
		}
		template<typename Obj>
		GTree<Obj>::GTree(GTNode<Obj>* _root)
		{
			root = _root;
		}
/*		template<typename Obj>
		GTree<Obj>::GTree(Obj*, GTree)
		{
			
		}  
		//Destructor
		template<typename Obj>
		GTree<Obj>::~GTree()
		{
			
		}                           */
		//Mutators
		//Query
		template<typename Obj>
		GTNode<Obj>* GTree<Obj>::getRoot()
		{
			return root;
		}
		template<typename Obj>
		GTNode<Obj>* GTree<Obj>::getChild(int index)
		{
			if(root != NULL) return root.getChild(index);
			else return NULL;
		}
		template<typename Obj>
		Obj* GTree<Obj>::current()
		{
			if(root != NULL) return root.getData();
			else return NULL;
		}
/*	*/	
}

