#ifndef MESH_GTREE
#define MESH_GTREE

#include "GTNode.h"
#include <cstdlib>

namespace c3131416_assignment2{

	template <typename Obj>
	class GTree{
	public:
		//Constructors
		GTree();
		GTree(GTNode<Obj>*);
		GTree(Obj*, GTree);
		//Destructor
		~GTree();
		//Mutators
		void add(Obj*);

		//void addTo(GTNode* &ptr, Obj);
		//Query
		GTNode<Obj>* getRoot();
		GTNode<Obj>* getChild(int);
		Obj* current();

	private:
		GTNode<Obj>* root;
	};
}

#include "GTree.template"

#endif