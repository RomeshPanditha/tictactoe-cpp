#ifndef MESH_GTNODE
#define MESH_GTNODE

#include <iostream>

namespace c3131416_assignment2{

	template <typename Obj>
	class GTNode
	{
	public:
		// Constructors
		GTNode(int num = 8);

		GTNode(Obj*, GTNode<Obj>*);

		//Destructor
		~GTNode();

		//Mutators
		void setData(Obj*);
		void setParent(GTNode<Obj>*);
		void addChild(GTNode<Obj>*);	
		//Query
		Obj getData() const;
		const GTNode<Obj>* getParent() const;
		GTNode<Obj>* getParent();
		const GTNode<Obj>* getChild(int) const;
		GTNode<Obj>* getChild(int);

		int getUsed() const;

	private:
		int numNodes;
		int used;

		Obj* data;
		GTNode<Obj>* parent;
		GTNode<Obj>* children[8]; // this is an array
	};
template <typename Obj>
std::ostream& operator<<(std::ostream& out, GTNode<Obj>& n);

}


#include "GTNode.template"

#endif