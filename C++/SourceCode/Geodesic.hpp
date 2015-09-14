#ifndef GEODESIC_HPP
#define GEODESIC_HPP

#include <iostream>
#include <Eigen>
#include "CovMat.hpp"

using namespace std;
using namespace Eigen;

class Geodesic
{
	private:

	public:
		static CovMat EuclideanGeodesic (const CovMat& covMat1, const CovMat& covMat2, double alpha);	
		static CovMat LogEuclideanGeodesic (CovMat& covMat1, CovMat& covMat2, double alpha);
		static CovMat RiemannianGeodesic (CovMat& covMat1, CovMat& covMat2, double alpha);
};
 
#endif