/*
 * ===========================================================================
 * Loom SDK
 * Copyright 2011, 2012, 2013
 * The Game Engine Company, LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * ===========================================================================
 */

#ifndef _lsfieldwriter_h
#define _lsfieldwriter_h

#include "loom/script/reflection/lsFieldInfo.h"

#include "loom/script/serialize/lsMemberInfoWriter.h"

namespace LS {
class FieldInfoWriter : public MemberInfoWriter {
protected:
    FieldAttributes attr;
    utString        fullTypeName;
    TemplateInfo    *templateInfo;
public:

    FieldInfoWriter() : templateInfo(NULL)
    {
    }

    json_t *write();

    void setFullTypeName(const utString& name)
    {
        this->fullTypeName = name;
    }

    void setFieldAttributes(const FieldAttributes& attr)
    {
        this->attr = attr;
    }

    void setTemplateTypeInfo(TemplateInfo *_templateInfo)
    {
        this->templateInfo = _templateInfo;
    }
};
}
#endif
