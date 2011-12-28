/*
  Free Download Manager Copyright (c) 2003-2011 FreeDownloadManager.ORG
*/

#if !defined(AFX_VMSCOMMANDLINE_H__7720A22D_B53F_40A1_9505_6163E1B8F4CD__INCLUDED_)
#define AFX_VMSCOMMANDLINE_H__7720A22D_B53F_40A1_9505_6163E1B8F4CD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif 

class vmsCommandLine  
{
public:
	LPCTSTR getExeName () const;
	bool is_EXE_CmdLine () const;
	void setArgs (LPCTSTR ptsz);
	void setExe (LPCTSTR ptsz);
	void Clear();
	LPCTSTR getArgs () const;
	LPCTSTR getExe () const;
	bool isEmpty () const;
	tstring toString() const;
	void fromString (LPCTSTR ptsz, bool bConvertToLongPath = false);
	bool operator == (const vmsCommandLine &cl) const {
		return _tcsicmp (m_tstrExe.c_str (), cl.m_tstrExe.c_str ()) == 0 && 
			_tcsicmp (m_tstrArgs.c_str (), cl.m_tstrArgs.c_str ()) == 0;
	}
	vmsCommandLine();
	virtual ~vmsCommandLine();

protected:
	tstring m_tstrArgs;
	tstring m_tstrExe;
};

#endif 
