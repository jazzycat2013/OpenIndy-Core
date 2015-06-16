#ifndef GENERATEFEATUREFUNCTION_H
#define GENERATEFEATUREFUNCTION_H

#include "function.h"

namespace oi{

/*!
 * \brief The GenerateFeatureFunction class
 * Function that uses its input elements to generate one or more new feature
 */
class OI_CORE_EXPORT GenerateFeatureFunction : public Function
{
    Q_OBJECT

public:
    GenerateFeatureFunction(QObject *parent = 0) : Function(parent){}

    virtual ~GenerateFeatureFunction(){}

signals:
    void addFeature(const QPointer<FeatureWrapper> &feature);
    void addFeatures(const QList<QPointer<FeatureWrapper> > &features);

};

}

#ifndef STR
#define STR(x) #x
#endif

#define GENERATEFEATUREFUNCTION_PREFIX de.openIndy.plugin.function.generateFeatureFunction.v
#define GenerateFeatureFunction_iidd STR(GENERATEFEATUREFUNCTION_PREFIX ## PLUGIN_INTERFACE_VERSION)

#endif // GENERATEFEATUREFUNCTION_H
