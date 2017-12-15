#ifndef DONG_NEURON_HPP_
#define DONG_NEURON_HPP_
#include "common.hpp"
#include <boost/shared_ptr.hpp>
#include <vector>

namespace dong
{

class Neuron
{
public:
    Neuron()
    {
        _value = 0.0F;
        _diff = 0.0F;
        _batch_diff = 0.0F;
        _history_diff = 0.0F;
        _forward_neuron_count = 0;
        _backward_neuron_count = 0;
    }

    ~Neuron() {}

    void forward();
    void backward();
    float _value;
    float _diff;
    float _batch_diff;
    float _history_diff;

    vector< Neuron* > _forward_neuron;
    vector< Neuron* > _weight_neuron;
    Neuron* _bias = NULL;
    int _forward_neuron_count;
    int _backward_neuron_count;

};

}

#endif  // DONG_NEURON_HPP_
