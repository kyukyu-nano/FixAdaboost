// BoostedCommittee.h: interface for the CBoostedCommittee class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_BOOSTEDCOMMITTEE_H__BAEE4FC8_5AEF_4B42_854C_845B8CF397B8__INCLUDED_)
#define AFX_BOOSTEDCOMMITTEE_H__BAEE4FC8_5AEF_4B42_854C_845B8CF397B8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include <vector>
#include "SPHypothesis.h"

class CBoostedCommittee  
{
public:
	CBoostedCommittee();
	virtual ~CBoostedCommittee();

  double Predict(double * in_Sample);

  bool LoadFromFile(FILE* in_File);
  bool LoadFromFile(const tstring& path);
  void WriteToFile(const tstring& path);
  void WriteToFile(tostream& outStream);
public:
  std::vector <CSPHypothesis> m_vHypotheses;
  std::vector <double> m_vWeights;
  int m_split;
  int m_label;
};

#endif // !defined(AFX_BOOSTEDCOMMITTEE_H__BAEE4FC8_5AEF_4B42_854C_845B8CF397B8__INCLUDED_)