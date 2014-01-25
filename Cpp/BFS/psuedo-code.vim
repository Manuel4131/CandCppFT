::Qlist nodes_to_visit = {root};
while( nodes_to_visit isn't empty ) {
  currentnode = nodes_to_visit.first();
  nodes_to_visit.prepend( currentnode.children );
  //do something
}

BFS:

list nodes_to_visit = {root};
while( nodes_to_visit isn't empty ) {
  currentnode = nodes_to_visit.first();
  nodes_to_visit.append( currentnode.children );
  //do something
}

The symmetry of the two is quite cool.

