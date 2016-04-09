// Copyright (c) 2016 Olli-Pekka Wallin <opwallin@gmail.com>

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
    
  /* Define which PAM interfaces we provide */
  #define PAM_SM_ACCOUNT
  #define PAM_SM_AUTH
  #define PAM_SM_PASSWORD
  #define PAM_SM_SESSION

  /* Include PAM headers */
  #include <security/pam_appl.h>
  #include <security/pam_modules.h>

  /* PAM entry point for session creation */
  int pam_sm_open_session(pam_handle_t *pamh, int flags, int argc, const char **argv) {
          return(PAM_IGNORE);
  }

  /* PAM entry point for session cleanup */
  int pam_sm_close_session(pam_handle_t *pamh, int flags, int argc, const char **argv) {
          return(PAM_IGNORE);
  }

  /* PAM entry point for accounting */
  int pam_sm_acct_mgmt(pam_handle_t *pamh, int flags, int argc, const char **argv) {
          return(PAM_IGNORE);
  }

  /* PAM entry point for authentication verification */
  int pam_sm_authenticate(pam_handle_t *pamh, int flags, int argc, const char **argv) {
          return(PAM_IGNORE);
  }

  /*
     PAM entry point for setting user credentials (that is, to actually
     establish the authenticated user's credentials to the service provider)
   */
  int pam_sm_setcred(pam_handle_t *pamh, int flags, int argc, const char **argv) {
          return(PAM_IGNORE);
  }

  /* PAM entry point for authentication token (password) changes */
  int pam_sm_chauthtok(pam_handle_t *pamh, int flags, int argc, const char **argv) {
          return(PAM_IGNORE);
  }
