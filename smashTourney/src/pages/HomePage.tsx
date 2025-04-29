import './HomePage.css'

function HomePage()
{

  return (
    <>
      <div className="container">
        <h2 className="title">Welcome!</h2>

        <div className="form-group">
          <label htmlFor="username">Username:</label>

          <input type="text" id="username" name="username" />
        </div>

        <div className="form-group">
          <label htmlFor="password">Password:</label>

          <input type="password" id="password" name="password" />

          <span className="switch-text">
            <link href={"/tourneyMenu"}>
              <button >
                Sign In
              </button>
            </link>

            <label className="form-group">Or</label>

            <link href={"/guestSignIn"}>
              <button >
                Continue As Guest
              </button>
            </link>

            <link href={`/signUp`}>
              <button >
                Sign Up Here
              </button>
            </link>
          </span>
        </div>
      </div>
    </>
  );
}

export default HomePage;
