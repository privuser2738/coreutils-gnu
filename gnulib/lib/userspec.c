/* userspec.c -- Parse a user and group string.
   Windows stub implementation

   Copyright (C) 1989-1992, 1997-1998, 2000, 2002-2025 Free Software
   Foundation, Inc.

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

#include "userspec.h"
#include <stddef.h>
#include <stdbool.h>

/* Windows stub: user/group parsing not supported on Windows */

char const *
parse_user_spec (char const *spec_arg, uid_t *uid, gid_t *gid,
                 char **username_arg, char **groupname_arg)
{
  (void) spec_arg;
  (void) uid;
  (void) gid;
  (void) username_arg;
  (void) groupname_arg;

  return "user/group specification not supported on Windows";
}

char const *
parse_user_spec_warn (char const *spec_arg, uid_t *uid, gid_t *gid,
                      char **username_arg, char **groupname_arg, bool *pwarn)
{
  (void) pwarn;
  return parse_user_spec (spec_arg, uid, gid, username_arg, groupname_arg);
}
