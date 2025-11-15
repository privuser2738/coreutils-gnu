/* idcache.c -- map user and group IDs, cached for speed
   Windows stub implementation

   Copyright (C) 1985, 1988-1990, 1997-1998, 2003, 2005-2007, 2009-2025 Free
   Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

#include <config.h>

#include "idcache.h"
#include <stddef.h>

/* Windows stub: uid/gid concept doesn't exist in the same way on Windows.
   Return NULL for all lookups to indicate no mapping available. */

char *
getuser (uid_t uid)
{
  (void) uid;
  return NULL;
}

char *
getgroup (gid_t gid)
{
  (void) gid;
  return NULL;
}

uid_t *
getuidbyname (const char *user)
{
  (void) user;
  return NULL;
}

gid_t *
getgidbyname (const char *group)
{
  (void) group;
  return NULL;
}
