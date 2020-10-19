/*
  Rudimentary implementation of A* nodegraph arch.
  
  
*/
#ifndef NODEGRAPH_H
#define NODEGRAPH_H

#define NODEGRAPH_MAX_SIZE 4096

/*
=================
  Typedefs and structs.
=================
*/
typedef struct nodegraph_node_s
{
	short nodes[NODEGRAPH_MAX_SIZE * 3];
	vec_t edgeLens[NODEGRAPH_MAX_SIZE * 3];
	short nodeId;
	short node_total;
}
nodegraph_node_t;

typedef struct nodegraph_s
{
	nodegraph_node_t nodes[NODEGRAPH_MAX_SIZE];
	short node_total;
}
nodegraph_t;



/*
=================
  functions
=================
*/
void node_system_ini(void);
void node_generate_graph_data(prvm_prog_t *prog);   //generate the whole graph for export
void node_system_close(void);
void node_system_reset(void);
void node_system_clean_node(

void node_load_file(void);                              //load a .node file
void node_generate_file(void);                      //writes .nodes file

void node_generate_graph_data(prvm_prog_t *prog);                     //generates actual nodegraph

void node_plot_course(vec3_t src, vec3_t dest);   // query node graph for next

void VM_node_register(prvm_prog_t *prog);           //  input node entity, entity is given id 
void VM_node_plotcourse_vector(prvm_prog_t *prog);  //  vector src, vector dst | return vector nextNodeOrg -> calls node_plot_course

#endif