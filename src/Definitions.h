#pragma once

// ���� �������� ������� ������������ ����� � �������
// ��� ������� ������ u''xx + u''yy + F = 0

typedef double NumericType;
#ifdef MPI_VERSION
const MPI_Datatype MpiNumericType = MPI_DOUBLE;
#endif
const NumericType DefaultEps = static_cast<NumericType>( 0.0001 );

#include <MathObjects.h> // CArea

// ������� ������� ������.
const CArea Area( -2, 2, -2, 2 );

// ������ �����.
inline NumericType F( NumericType x, NumericType y )
{
	const NumericType xy2 = ( x + y ) * ( x + y );
	const NumericType f = 4 * ( 1 - 2 * xy2 ) * exp( 1 - xy2 );
	return f;
}

// ��������� �������.
inline NumericType Phi( NumericType x, NumericType y )
{
	const NumericType xy2 = ( x + y ) * ( x + y );
	const NumericType phi = exp( 1 - xy2 );
	return phi;
}
