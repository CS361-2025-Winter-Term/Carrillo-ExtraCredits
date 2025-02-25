// includes userProfile
class loginView {
// no attributes

public:
string readUsernameTextbox();
string readPasswordTextbox();
string readEmailTextbox();
notificationPreferences readNotificationPreferences();
void registerUser(userProfile UserProfile, string password);
void displayError(string error_message);
void transitionToHomeView(userProfile UserProfile);
}
