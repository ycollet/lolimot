// Author: Y. Collette
// EMail: ycollet@freesurf.fr
// Date: 02/04/2007

/*
This file is part of Lolimot.

    Foobar is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    Foobar is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Foobar; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef FILTER_H
#define FILTER_H

#include <vector>

using namespace std;

#include <TrainLolimotStruct.h>

void Filter_AddMinMax(vector<vector<float> > & InputData,
		      vector<vector<float> > & MeasureData,
		      vector<vector<float> > & Selected_InputData,
		      vector<vector<float> > & Selected_MeasureData);

void Filter_Filter(vector<vector<float> > & InputData,
		   vector<vector<float> > & MeasureData,
		   unsigned int Filter_Step);

void Filter_MovingAverage(vector<vector<float> > & InputData,
			  vector<vector<float> > & MeasureData,
			  unsigned int MAverage);

void Filter_Select(vector<vector<float> > & InputData,
		   vector<vector<float> > & MeasureData,
		   unsigned int Select_Step);

void Filter_EchantStat(vector<vector<float> > & InputData,
		       vector<vector<float> > & MeasureData,
		       unsigned int NbBar,
		       unsigned int NbPoints,
		       bool addMinMax);

void Filter_EchantDyn(vector<vector<float> > & InputData,
		      vector<vector<float> > & MeasureData,
		      unsigned int NbBar,
		      unsigned int NbPoints,
		      bool addMinMax);

void Filter_EchantDelta(vector<vector<float> > & InputData,
			vector<vector<float> > & MeasureData,
			unsigned int NbPoints,
			unsigned int NbTimesToSelect,
			bool addMinMax,
			unsigned int Measure);

void Filter_EchantRand(vector<vector<float> > & InputData,
		       vector<vector<float> > & MeasureData,
		       unsigned int NbPoints,
		       bool addMinMax);

void Filter_EchantGreedy(vector<vector<float> > & InputData,
			 vector<vector<float> > & MeasureData,
			 vector<float> & InputMin,
			 vector<float> & InputMax,
			 unsigned int NbPtsToSelect,
			 bool addMinMax);

void Filter_EchantGreedy_Fast_AddMeasure(vector<vector<float> > & InputData,
					 vector<vector<float> > & MeasureData,
					 vector<float> & InputMin,
					 vector<float> & InputMax,
					 vector<float> & MeasureMin,
					 vector<float> & MeasureMax,
					 unsigned int NbPtsToSelect,
					 unsigned int NbPtsAtTheEnd,
					 bool addMinMax,
					 unsigned int Measure);

void Filter_EchantGreedy_Fast(vector<vector<float> > & InputData,
			      vector<vector<float> > & MeasureData,
			      vector<float> & InputMin,
			      vector<float> & InputMax,
			      unsigned int NbPtsToSelect,
			      unsigned int NbPtsAtTheEnd,
			      bool addMinMax);

void Filter_EchantGreedy_AddMeasure(vector<vector<float> > & InputData,
				    vector<vector<float> > & MeasureData,
				    vector<float> & InputMin,
				    vector<float> & InputMax,
				    vector<float> & MeasureMin,
				    vector<float> & MeasureMax,
				    unsigned int NbPtsToSelect,
				    bool addMinMax,
				    unsigned int Measure);

void Filter_Echant_Output(vector<vector<float> > & InputData,
			  vector<vector<float> > & MeasureData,
			  vector<float> & MeasureMin,
			  vector<float> & MeasureMax,
			  unsigned int Measure,
			  unsigned int NbPtsToSelect,
			  bool UseMin,
			  bool addMinMax);

void Filter_Echant_Input_Add(vector<vector<float> > & InputData,
			     vector<vector<float> > & MeasureData,
			     vector<float> & InputMin,
			     vector<float> & InputMax,
			     float Min_Bound,
			     float Max_Bound,
			     unsigned int Input_Index,
			     bool addMinMax);

void Filter_Echant_Input_Remove(vector<vector<float> > & InputData,
				vector<vector<float> > & MeasureData,
				vector<float> & InputMin,
				vector<float> & InputMax,
				float Min_Bound,
				float Max_Bound,
				unsigned int Input_Index,
				bool addMinMax);

void Filter_Normalize(vector<vector<float> > & InputData,
		      vector<vector<float> > & MeasureData,
		      vector<float> & InputMin,
		      vector<float> & InputMax,
		      vector<float> & MeasureMin,
		      vector<float> & MeasureMax,
		      string Filename,
		      bool   SaveData);

void Filter_EchantPartialGreedy_AddMeasure(vector<vector<float> > & InputData,
					   vector<vector<float> > & MeasureData,
					   vector<float> & InputMin,
					   vector<float> & InputMax,
					   vector<float> & MeasureMin,
					   vector<float> & MeasureMax,
					   unsigned int NbPtsToSelect,
					   unsigned int NbTimesToSelect,
					   bool addMinMax,
					   unsigned int Measure);

void Filter_EchantPartialGreedyDelta(vector<vector<float> > & InputData,
				     vector<vector<float> > & MeasureData,
				     vector<float> & InputMin,
				     vector<float> & InputMax,
				     vector<float> & MeasureMin,
				     vector<float> & MeasureMax,
				     unsigned int NbPtsToSelect,
				     unsigned int NbTimesToSelect,
				     bool addMinMax,
				     unsigned int Measure);

void Skip(vector<vector<float> > & InputData,
	  vector<vector<float> > & MeasureData,
	  vector<Data_Skip> & List_Skip,
	  unsigned int NumOfFile);
#endif
