/**
 * Copyright (C) 2013 kangliqiang ,kangliq@163.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#if!defined __TRANSACTIONCHECKLISTENER_H__
#define __TRANSACTIONCHECKLISTENER_H__

#include "SendResult.h"

/**
 * 服务器回调Producer，检查本地事务分支成功还是失败
 *
 */
class TransactionCheckListener
{
public:
	virtual ~TransactionCheckListener() {}
	virtual LocalTransactionState checkLocalTransactionState(MessageExt* pMsg)=0;
};

#endif
