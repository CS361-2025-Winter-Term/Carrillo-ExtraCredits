// includes notification preferences class

class userProfile {

private: 
// attributes
string Username;
string Email;
notificationPreferences NotificationPreferences;

public:
// operations/methods 

//constructor
userProfile(string Username, string Email, notificationPreferences NotificationPreferences);

// getter functions for private attributes
string get_User();
string get_Email();
notificationPreferences get_NotifPref();
}
