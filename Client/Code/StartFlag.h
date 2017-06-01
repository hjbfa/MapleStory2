#pragma once

#ifndef StartFlag_h__
#define StartFlag_h__

#include "GameObject.h"

namespace Engine
{
	class CVIBuffer;
	class CTexture;
	class CFrame;
}

class CStartFlag
	: public Engine::CGameObject
{
private:
	explicit CStartFlag(LPDIRECT3DDEVICE9 pDevice);

public:
	virtual ~CStartFlag(void);

public:
	virtual int Update(void);
	virtual void Render(void);

public:
	static CStartFlag* Create(LPDIRECT3DDEVICE9 pDevice);

private:
	HRESULT Initialize(void);
	HRESULT AddComponent(void);
	void Release(void);

private:
	Engine::CVIBuffer*		m_pBuffer;
	Engine::CTexture*		m_pTexture;

	Engine::CFrame*			m_pFrame;
};

#endif // StartFlag_h__