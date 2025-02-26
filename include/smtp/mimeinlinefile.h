/*
  Copyright (c) 2011-2012 - Tőkés Attila

  This file is part of SmtpClient for Qt.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  See the LICENSE file for more details.
*/

#ifndef MIMEINLINEFILE_H
#define MIMEINLINEFILE_H

#include "mimefile.h"

#include "smtp_export.h"

class SMTP_EXPORT MimeInlineFile : public MimeFile
{
public:

    /* [1] Constructors and Destructors */

    MimeInlineFile(QFile *f);
    ~MimeInlineFile();

    /* [1] --- */


    /* [2] Getters and Setters */

    /* [2] --- */

protected:

    /* [3] Protected members */

    /* [3] --- */


    /* [4] Protected methods */

    virtual void prepare();

    /* [4] --- */
};

#endif // MIMEINLINEFILE_H
