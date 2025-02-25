// notificationFrequency could be included as an enum, but not specified by activity diagram
// left as is
class notificationPreferences {

Private:
// attributes
notificationFrequency frequency;
bool isEnabled;

Public:
// methods/operations

// constructor
notificationPreferences(notificationFrequency frequency, bool isEnabled);

// getters for attributes
notificationFrequency get_frequency();
bool get_enabled();
}
