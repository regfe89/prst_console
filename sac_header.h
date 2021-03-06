/*******************************************************************************
 This file is part of PRESTo Early Warning System
 Copyright (C) 2009-2015 Luca Elia

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*******************************************************************************/

/*******************************************************************************

	SAC file header

*******************************************************************************/

#ifndef SAC_HEADER_H_DEF
#define SAC_HEADER_H_DEF

struct sac_header_t {
	const static float UNDEF;

	float DELTA;
	float DEPMIN;
	float DEPMAX;
	float SCALE;
	float ODELTA;
	float B;
	float E;
	float O;
	float A;
	float INTERNAL1;
	float T[10];
	float F;
	float RESP[10];
	float STLA;
	float STLO;
	float STEL;
	float STDP;
	float EVLA;
	float EVLO;
	float EVEL;
	float EVDP;
	float UNUSED1;
	float USER[10];
	float DIST;
	float AZ;
	float BAZ;
	float GCARC;
	float INTERNAL2[2];
	float DEPMEN;
	float CMPAZ;
	float CMPINC;
	float UNUSED2[11];
	
	int NZYEAR;
	int NZJDAY;
	int NZHOUR;
	int NZMIN;
	int NZSEC;
	int NZMSEC;
	int NVHDR;
	int INTERNAL3[2];
	int NPTS;
	int INTERNAL4[2];
	int UNUSED3[3];
	int IFTYPE;
	int IDEP;
	int IZTYPE;
	int UNUSED4;
	int IINST;
	int ISTREG;
	int IEVREG;
	int IEVTYP;
	int IQUAL;
	int ISYNTH;
	int UNUSED5[10];
	int LEVEN;
	int LPSPOL;
	int LOVROK;
	int LCALDA;
	int UNUSED6;
	
	char KSTNM[8];
	char KEVNM[16];
	char KHOLE[8];
	char KO[8];
	char KA[8];
	char KT[10][8];
	char KF[8];
	char KUSER[3][8];
	char KCMPNM[8];
	char KNETWK[8];
	char KDATRD[8];
	char KINST[8];
};

#endif
