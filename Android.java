// 19/02/17
/////////////////////////////////////////////////////
/// STARTING ANOTHER ACTIVITY AND PASSING MESSAGE ///
/////////////////////////////////////////////////////
// -- MyActivity.java
Intent intent = new Intent(this, NextActivity.class);
intent.putExtra("Appy", "Hello there!");
startActivity(intent);

// -- NextActivity.java
Bundle bundle = getIntent().getExtras();
String message = (String) bundle.get("Appy");


/////////////////////////////////////////////////////
///////// WIDGET ONCLICK LISTENER ///////////////////
/////////////////////////////////////////////////////
//########## (1) ##########
// -- MyActiviy.java
widget.setOnClickListener(new OnClickListener{
    @override
    public void onClick(View v){
        // do something
    }
});
//########## (2) ##########
// -- layout.xml
android:onClick="launchNextActivity"

// -- MyActivity.java
public void launchNextActivity(View v){
    // do Something
}


/////////////////////////////////////////////////////
//// ADDING ACTIVITY/BROADCAST RECIEVER/SERVICE  ////
///////////////// TO MANIFEST ///////////////////////
/////////////////////////////////////////////////////
// -- AndroidManifest.xml
<activity
    android:name=".MyActivity">
    <intent-filter>
        <action android:name="android.intent.action.MAIN"/>
        <category android:name="android.intent.category.LAUNCHER"/>
    </intent-filter>
</activity>

<service
    android:name=".MyIntentService">
</service>

<reciever
    android:name=".MyBroadcastReceiver">
    <intent-filter>
        <action android:name="appcypher.filter"/>
    </intent-filter>
</reciever>

/////////////////////////////////////////////////////
////////// USES PERMISSION IN MANIFEST //////////////
/////////////////////////////////////////////////////
// -- AndroidManifest.xml
<uses-permission android:name="android.permission.INTERNET"/>
<uses-permission android:name="android.permission.ACCESS_FINE_LOCATION"/>
<uses-permission android:name="android.permission.CAMERA"/>


/////////////////////////////////////////////////////
/////////// CREATING AN INTENT SERVICE //////////////
/////////////////////////////////////////////////////
// -- MyIntentService.java
public class MyIntentService extends IntentService {

	public MyIntentService() {
		super(".MyIntentService");
	}

	@Override
	protected void onHandleIntent(Intent intent) {
		// do something
	}
}

/////////////////////////////////////////////////////
////////////// STARTING A NEW THREAD ////////////////
/////////////////////////////////////////////////////
Runnable r = new Runnable() {
	@Override
	public void run() {
        // do something
	}
};

Thread th = new Thread(r);
th.start();


/////////////////////////////////////////////////////
/////////////// CREATING A HANDLER  /////////////////
/////////////////////////////////////////////////////
Handler handler = new Handler(){
    @Override
	public void handleMessage(Message msg) {
		TextView text = (TextView) findViewById(R.id.textView2);
		text.setText("Nice Job!");
	}
};

Runnable r = new Runnable() {
	@Override
	public void run() {
        handler.sendEmptyMessage(0);
	}
};

/////////////////////////////////////////////////////
/////////////////// TIME WAIT  //////////////////////
/////////////////////////////////////////////////////
long futureTime = System.currentTimeMillis() + 5000;
while(futureTime > System.currentTimeMillis()) {
	synchronized(this) {
		try {
			wait(futureTime - System.currentTimeMillis());
		} catch(Exception e) {
		}
	}
	Log.i(MyIntentService.TAG, "Service finished!");
}

/////////////////////////////////////////////////////
///////////////// CUSTOM ADAPTER  /////////////////// // UPDATE TO VIEW HOLDER PATTERN
/////////////////////////////////////////////////////
// -- CustomAdapter.java
public class CustomAdapter extends ArrayAdapter<String> {
	public CustomAdapter(Context context, String [] list) {
		super(context, R.layout.list_item, list);
	}

	@NonNull
	@Override
	public View getView(int position, View convertView, ViewGroup parent) {
		LayoutInflater inflater = LayoutInflater.from(getContext());
		View customView = inflater.inflate(R.layout.list_item, parent, false);

		String item = getItem(position);
		TextView text = (TextView) customView.findViewById(R.id.textView);
		ImageView image = (ImageView) customView.findViewById(R.id.imageView);

		text.setText(item);
		image.setImageResource(R.drawable.afro);
		return customView;
	}
}
// -- MainActivity.java/onCreate
ListAdapter listAdapter = new CustomAdapter(this, list);
ListView listView = (ListView) findViewById(R.id.listView);
listView.setAdapter(listAdapter);

listView.setOnItemClickListener(new AdapterView.OnItemClickListener() {
    @Override
    public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
        String number = (String) parent.getItemAtPosition(position);
        Toast.makeText(ScrollingActivity.this, number, Toast.LENGTH_SHORT).show();
    }
});
