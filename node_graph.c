
#include "quakedef.h"
#include "node_graph.h"

#define NODEGRAPH_PREVIOUS nodegraph_node_t[NODEGRAPH_MAX_SIZE * 3]

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

static nodegraph_t nodeGraph_data;

/*
=================
Node graph Lifecycle API
  controls 
=================
*/
void node_system_ini(void)
{
	// ini called after map load, begin node system
	node_system_reset();
}

void node_system_close(void)
{
	//unload nodegraph data when server is shutting down / changing maps
}

void node_system_reset(void)
{
	//simply clears nodegraph data on-demand
	nodegraph_t nodegraph;
	
	
	nodegraph = nodeGraph_data;
	
	for(short i = 0; i < nodegraph.node_total; i = i + 1){
		
	}
}

/*
=================
node_generate_graph

  generates the node graph for export only.
=================
*/
void node_generate_graph_data(prvm_prog_t *prog)
{
	
}

/*
=================
node_generate_file

  generates the .nodes file for a map. This contains the static nodegraph data a map
  tries to load at runtime.
=================
*/
void node_load_file(void)
{
	
}

/*
=================
node_generate_file

  generates the .nodes file for a map. This contains the static nodegraph data a map
  tries to load at runtime.
=================
*/
void node_generate_file(void)
{
	
}

/*
=================
node_plot_course


=================
*/
void node_plot_course(vec3_t src, vec3_t dest)
{
	
}

/*
=================
VM_node_register

void node_register_node(entity node)
Registers a node onto the node graph,
gives the node entity a proper nodeId as well.
=================
*/
void VM_node_register(prvm_prog_t *prog)
{
	
}


/*
=================
VM_node_plotcourse_vector

vector node_plotcourse_vector(vector src, vector dst)
=================
*/
void VM_node_plotcourse_vector(prvm_prog_t *prog)
{
	//algorithm
	//1) find closest valid node to vec3_t dst
	//2) 
}

/*
=================
VM_node_generate_nodegraph

vector VM_node_generate_nodegraph(void)
=================
*/
void VM_node_generate_nodegraph(prvm_prog_t *prog)
{
	
}
