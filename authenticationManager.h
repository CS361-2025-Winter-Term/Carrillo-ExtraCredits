public enum registrationStatus {
  SUCCESS,
  USER_ALREADY_EXISTS,
  UNKNOWN_ERROR
}

// includes userProfile and registrationStatus
class authenticationManager{
//no attributes

private:

bool validateUsername(string username);
// bool for valid/invalid username
bool validatePassoword(string password);
// bool for valid/invalud password
string hashPassword(string password);
bool validateEmail(string email);
// bool for valid/invalid email
registrationStatus saveNewUser(userProfile UserProfile, string password);
// returns from options listed above
}


