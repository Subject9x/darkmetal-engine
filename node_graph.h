/*
  Rudimentary implementation of A* nodegraph arch.
  
  
*/
#ifndef node_graph.h

#define NODEGRAPH_MAX_SIZE 4096
#define NODEGRAPH_PREVIOUS[NODEGRAPH_MAX_SIZE * 3]

#define NODEGRAPH_DATA

void node_generate_graph_data(prvm_prog_t *prog);   //generate the whole graph for export

void node_load_file();                              //load a .node file
void node_generate_file(void);                      //writes .nodes file

void node_generate_graph_data(prvm_prog_t *prog);                     //generates actual nodegraph

void node_plot_course(vec3_t src, vec3_t dest);   // query node graph for next

void VM_node_register(prvm_prog_t *prog);           //  input node entity, entity is given id 
void VM_node_plotcourse_vector(prvm_prog_t *prog);  //  vector src, vector dst | return vector nextNodeOrg -> calls node_plot_course

#endif